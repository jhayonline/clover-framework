# 🍀 Clover

**Clover** is a lightweight C++ HTTP library for building fast and flexible backend systems.

It provides core building blocks like routing, request/response handling, middleware, and a server runtime, so you can build APIs and services without dealing with low-level networking. Clover is minimal and unopinionated, inspired by tools like Axum, but designed for the C++ ecosystem.

Clover does not enforce how you structure your code. You can organize your application however you like. Modular, MVC-style, or completely inline. It simply provides the HTTP layer and gets out of your way.

---

# Quick Disclaimer

Clover is a personal project I built for curiosity, not convention.

I wanted to understand what it really feels like to build a simple HTTP API in C++ from the ground up, without the overhead or complexity that comes with frameworks like Oatpp or Drogon. Don't get me wrong, they're both fantastic frameworks loved by a lot of C++ devs, but it's simply not for me. When I tried them, I didn’t enjoy how much setup and boilerplate it took just to get moving, so I built something intentionally minimal, something I could understand end-to-end and evolve on my own terms.

This is not production-ready and honestly I don't think it ever would, and it is not designed or optimized to be one.

It’s an experimental HTTP layer I built for learning, exploration, and fun. I might personally use it in real projects out of preference, but I don’t recommend it for production systems or serious production workloads.

Clover is me exploring C++ backend systems in the simplest way I know how. Nothing more, nothing less.

---

## 🚀 Quick Start

### One command to run

```bash
# Clone the starter template
git clone https://github.com/jhayonline/clover-starter.git my-app
cd my-app

# Make the CLI executable
chmod +x clover

# Build and run
./clover
