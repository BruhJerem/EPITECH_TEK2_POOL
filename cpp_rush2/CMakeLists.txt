cmake_minimum_required(VERSION 3.9)
project(cpp_rush2)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp_rush2
        Box.cpp
        Box.hpp
        ConveyorBelt.cpp
        ConveyorBelt.hpp
        ConveyorBeltRand.cpp
        ConveyorBeltRand.hpp
        Elf.cpp
        Elf.hpp
        GiftPaper.cpp
        GiftPaper.hpp
        IConveyorBelt.hpp
        IElf.hpp
        IPapaXmasElf.hpp
        ITable.hpp
        LittlePony.cpp
        LittlePony.hpp
        Main.cpp
        Object.cpp
        Object.hpp
        PapaXmasConveyorBelt.cpp
        PapaXmasConveyorBelt.hpp
        PapaXmasElf.cpp
        PapaXmasElf.hpp
        PapaXmasTable.cpp
        PapaXmasTable.hpp
        Table.cpp
        Table.hpp
        TableRand.cpp
        TableRand.hpp
        Teddy.cpp
        Teddy.hpp
        Toy.cpp
        Toy.hpp
        Wrap.cpp
        Wrap.hpp)
