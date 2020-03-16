
#include "server_manager.h"
#include "handlers.h"

int main() {
    ServerManager s("localhost", 8999);
    s.add_handler(HttpMethod::Get, "/test", handlers::hello_world);
    s.start();
    //httplib::Server serv;
    //serv.listen("localhost", 8181);
    //serv.Get("/test", handlers::hello_world);


}