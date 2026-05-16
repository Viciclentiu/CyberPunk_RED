cmake_minimum_required(VERSION 4.1)
project(Cyber)

set(CMAKE_CXX_STANDARD 20)





include(FetchContent)
FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.1
)
FetchContent_MakeAvailable(SFML)

add_executable(Cyber main.cpp die.h
        die.cpp
        item.h
        weapon.h
        armor.h
        gear.h
        cyberware.h
        FoundationalCyberware.h
        Cybereye.h
        Cyberarm.h
        neuralink.h
        character.h
        stats.h
        skill.h
        role.h
        solo.h
        netrunner.h
        cyberdeck.h
        program.h)
target_link_libraries(Cyber sfml-graphics sfml-window sfml-system)