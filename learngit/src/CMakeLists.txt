set(myexe_EXEC_SRCS
    main.cpp
    )

include_directories(
    ${PROJECT_SOURCE_DIR}/includes/
    #${PROJECT_BINARY_DIR}/libs/
    #${PROJECT_SOURCE_DIR}/src/markup
    #${PROJECT_SOURCE_DIR}/src/modules/
    #/opt/Ice/include
)

link_directories(
/usr/local/lib
#$ENV{ORACLE_HOME}/lib
)


#link_libraries(myexe markup)
#link_libraries(main hellolib)

add_executable(main ${myexe_EXEC_SRCS})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/)

#install(TARGETS main RUNTIME DESTINATION bin)

