cmake_minimum_required(VERSION 3.29)
project(PocoServerApp)
find_package(Poco REQUIRED COMPONENTS Net Util JSON Data )
set(CMAKE_CXX_STANDARD 17)
add_executable(
PocoServerApp src/main.cpp
PocoServerApp src/AppServer.cpp
PocoServerApp src/DatabaseManager.cpp
PocoServerApp src/ComponentHandler.cpp
PocoServerApp src/Util.cpp

)
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${Poco_INCLUDE_DIRS})
target_link_libraries(PocoServerApp PRIVATE Poco::Net Poco::Util Poco::JSON)
