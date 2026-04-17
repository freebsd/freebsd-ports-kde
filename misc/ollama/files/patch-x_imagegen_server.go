-- same issue as first chunk: https://github.com/ollama/ollama/issues/15107

--- x/imagegen/server.go.orig	1979-11-30 08:00:00 UTC
+++ x/imagegen/server.go
@@ -55,7 +55,9 @@ func NewServer(modelName string) (*Server, error) {
 	return &Server{
 		modelName: modelName,
 		done:      make(chan error, 1),
-		client:    &http.Client{Timeout: 10 * time.Minute},
+		// No client-level timeout: image generation on CPU can take many minutes.
+		// Cancellation is handled via request context.
+		client: &http.Client{},
 	}, nil
 }
 
@@ -116,8 +118,8 @@ func (s *Server) Load(ctx context.Context, _ ml.System
 	cmd := exec.Command(exe, "runner", "--imagegen-engine", "--model", s.modelName, "--port", strconv.Itoa(port))
 	cmd.Env = os.Environ()
 
-	// On Linux, set LD_LIBRARY_PATH to include MLX library directories
-	if runtime.GOOS == "linux" {
+	// On Linux and FreeBSD, set LD_LIBRARY_PATH to include MLX library directories
+	if runtime.GOOS == "linux" || runtime.GOOS == "freebsd" {
 		// Build library paths: start with LibOllamaPath, then add any mlx_* subdirectories
 		libraryPaths := []string{ml.LibOllamaPath}
 		if mlxDirs, err := filepath.Glob(filepath.Join(ml.LibOllamaPath, "mlx_*")); err == nil {
