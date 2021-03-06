#ifndef ROUTER_H
#define ROUTER_H
#include "streams/Request.hpp"
#include "utils/Factory.hpp"
#include "endPoint/EndPoint.hpp"

class Router
{
private:
    Router();
    Factory<EndPoint*> endPoints;
public:
    static Router router;
    void route(Request* request) const;
    void addRoute(const char* route, EndPoint* endPoint);

};

#endif // ROUTER_H
