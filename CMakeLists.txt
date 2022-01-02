cmake_minimum_required(VERSION 3.22)

project(HELLOAPP VERSION 3.2)

set(SRC_FILES  
    main.cpp
    src/calc.cpp)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
add_executable(hellobinary ${SRC_FILES})
target_include_directories(hellobinary PUBLIC include/ lib/)
target_link_libraries(hellobinary PUBLIC wifi_lib)
set (PRODUCT_YEAR "2022")
target_include_directories(hellobinary PUBLIC ${PROJECT_BINARY_DIR})
###################################################################
# 1- if 
#OFF 0 NO FALSE N "NOTFOUND" "IGNORE" ---> False
if(DEBUG)
    set(DEBUGINFO "author Moatasem Elsayed")
endif()

#   if (NOT DEBUG ) ! 
#   if (Var AND var2)
#   if (var OR VAR2)
#   if (myval MATCHES regularexpression)
#   if (EXISTS file)
#   if (Var LESS Var2)
#   if (Var GREATER Var2)
#   if (Var EQUAL VAR2)
#   if(TARGET wifi_lib) -> add_executable add_library ,add_custom_target

# if(TARGET wifi_lib)
#     message("wifi is avilable ")
# else()
#     message(FATAL_ERROR " File not found")
# endif()
###################################################################
#2- for 
# foreach(F IN ITEMS M O A T A S E M  )
#     message(STATUS ${F})
# endforeach()

# #with list
# set(lst E L S A Y E D )
# foreach(F IN LISTS  lst )
#     message(STATUS ${F})
# endforeach()

########################################################################
#3- while loop
# set(VAR 10)
# while(VAR)
#     message(${VAR})
#     math(EXPR VAR "${VAR} - 1")
# endwhile()
###################################################################
# #4- function
# function(happynewyear arg1)
#     message ("ARG1 ${arg1}") #name of variable
#     message ("ARG1 ${${arg1}}") #show values of list
#     message ("ARG1 ${ARGN}") #extra argument
#     message ("ARG1 ${ARGC}") # count

# endfunction()

# set(var 2 0 2 2 )
# happynewyear(var jan)

#Try to check it ?
# PARENT_SCOPE 

###################################################################
#5- let`s open CMAKECache
# option(CVar "BOOL Var" TRUE)
# set(Var2 TRUE CACHE BOOL "bool variable hello")
message("Cache is ${Var2}")
################################################################
configure_file(defaultconfig.h.in defultconfig.h)


#6 compiler info
target_compile_definitions(hellobinary PUBLIC "STD_CXX=20")
target_compile_options(hellobinary PUBLIC -march=native)
#7 install 

install(FILES "${PROJECT_BINARY_DIR}/hellobinary.exe"
  DESTINATION "${PROJECT_BINARY_DIR}/executable"
  )

install(FILES 
    "${CMAKE_SOURCE_DIR}/lib/Wifi.hpp"
    "${CMAKE_SOURCE_DIR}/include/calc.hpp"
    DESTINATION "${PROJECT_BINARY_DIR}/include"
  )