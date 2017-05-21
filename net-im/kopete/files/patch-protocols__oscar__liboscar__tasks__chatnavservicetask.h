Give RequestType a base type (quint16, effectively) because these 
values are used in an initializer-list elsewhere that expects
an enum based on quint16 and if RequestType is an unbased, it is
effectively int and a narrowing error follows.

--- protocols/oscar/liboscar/tasks/chatnavservicetask.h.orig	2016-12-15 22:32:05.287165000 +0100
+++ protocols/oscar/liboscar/tasks/chatnavservicetask.h	2016-12-15 22:32:33.608789000 +0100
@@ -34,7 +34,7 @@
 	ChatNavServiceTask( Task* parent );
 	~ChatNavServiceTask();
 
-	enum RequestType { Limits = 0x0002, Exchange, Room, ExtRoom, Members,
+	enum RequestType : Oscar::WORD { Limits = 0x0002, Exchange, Room, ExtRoom, Members,
 	                   Search, Create };
 
 	void setRequestType( RequestType );
