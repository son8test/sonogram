if ( testrepo STREQUAL "REPO" OR testhash STREQUAL "HASH" )
    message( FATAL_ERROR "set REPO and HASH placeholders to actual values" )
endif( )

set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )

include( FetchContent )

FetchContent_Declare(
    son__${testrepo}
    GIT_REPOSITORY https://github.com/soneight/${testrepo}.git
    GIT_TAG        ${testhash}
)
FetchContent_MakeAvailable( son__${testrepo} )
