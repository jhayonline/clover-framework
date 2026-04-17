#include <iostream>
#include <response.hpp>
#include <router.hpp>
#include <routes.hpp>
#include <server.hpp>

class HomeController {
public:
  static Response index(Request req) { return Response("Welcome to Clover!"); }

  static Response hello(Request req) {
    return Response::json(R"({"message": "Hello from Clover!"})");
  }

  static Routes routes() {
    return Routes().prefix("/api").get("/", index).get("/hello", hello);
  }
};

int main() {
  std::cout << "🍀 Clover Server starting..." << std::endl;

  Router router;
  router.mount(HomeController::routes());

  Server server("0.0.0.0", 3000);
  server.use(router);
  server.listen();

  return 0;
}
