target_sources(cs2rec PRIVATE
    main.cpp
    interfaces.cpp
)

add_subdirectory(util)
add_subdirectory(hook)
add_subdirectory(afx)
add_subdirectory(mem)
add_subdirectory(cmdserver)
add_subdirectory(module)