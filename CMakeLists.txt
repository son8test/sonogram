cmake_minimum_required( VERSION 3.8...3.27 )
project( son8test VERSION 0.0.0 LANGUAGES CXX )

set( SON8PROJ son8__${PROJECT_NAME} )

set( testrepo sonogram )
set( testhash 3f6641b1e253100a1d3084c37a0519e9fe5b6697 )

include( FetchContent )
add_subdirectory( source )

enable_testing( )
add_subdirectory( testing )
