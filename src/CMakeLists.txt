rock_library(infuse_asn1_types
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(infuse_asn1_types_bin Main.cpp
    DEPS infuse_asn1_types)

