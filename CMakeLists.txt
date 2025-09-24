cmake_minimum_required( VERSION 3.8...3.27 )
project( son8test VERSION 0.0.0 LANGUAGES CXX )

set( SON8PROJ son8__${PROJECT_NAME} )

set( testrepo sonogram )
set( testhash e736815b5068690e2feb5682aac340239509066c )

add_subdirectory( source )
