cmake_minimum_required( VERSION 3.8...3.27 )
project( son8test VERSION 0.0.0 LANGUAGES CXX )

set( SON8PROJ son8__${PROJECT_NAME} )

set( testrepo sonogram )
set( testhash 5153d1b3154e61ada3aeddff13bdcfaa53ea1660 )

add_subdirectory( source )
