#ifndef server_h
#define server_h

#include "router.h"
#include "middleware.h"
#include "cors.h"

typedef struct App App;

typedef struct {
    Router router;
    
    int port;
    int fileDescriptor;
} Server;

typedef struct {
    int clientSocket;
    App *app;
} ClientHandlerArgs;

Server initServer(int port);
void freeServer(Server *server);
void addHeaderToResponse(HttpResponse *response, const char *name, const char *value);
void freeHttpResponse(HttpResponse *response);
void applyCorsHeaders(const CorsConfig *config, const HttpRequest *request, HttpResponse *response);

void runServer(App *app);

#endif
