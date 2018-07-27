
esrocos_asn1_types_package(esrocos_types_base
    OUTDIR asn1
    IMPORT types/base types/sensor_samples)

#glob generated files
file(GLOB SRC_FILES ${CMAKE_BINARY_DIR}/asn1/*.c)
file(GLOB HEADER_FILES ${CMAKE_BINARY_DIR}/asn1/*.h)

rock_library(infuse_asn1_types
    SOURCES ${SRC_FILES}
    HEADERS ${HEADER_FILES}
    DEPS esrocos_types_base_generate_c)

#rock_executable(infuse_asn1_types_bin Main.cpp
#    DEPS infuse_asn1_types)

#add_dependencies(infuse_asn1_types esrocos_types_base_generate_c)

#install(DIRECTORY ${CMAKE_BINARY_DIR}/asn/asn1 DESTINATION ${CMAKE_INSTALL_PREFIX}/include)
#install(TARGETS esrocos_types_base_asn)




