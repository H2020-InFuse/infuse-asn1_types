

#the type library is above 2 gigs of size, so we need to enlarge the adressing model
add_definitions(-mcmodel=large)

esrocos_asn1_types_package(esrocos_types
    OUTDIR ../src
    IMPORT types/fused types/base types/sensor_samples)


#glob generated files
file(GLOB SRC_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ./*.c)
file(GLOB HEADER_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ./*.h)

rock_library(asn1
    SOURCES ${SRC_FILES}
    HEADERS ${HEADER_FILES})

#rock_executable(infuse_asn1_types_bin Main.cpp
#    DEPS infuse_asn1_types)

add_dependencies(asn1 esrocos_types_generate_c)

#install(DIRECTORY ${CMAKE_BINARY_DIR}/asn/asn1 DESTINATION ${CMAKE_INSTALL_PREFIX}/include)
#install(TARGETS esrocos_types_base_asn)




