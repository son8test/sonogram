#include <app.hxx>
#include <dirty/parser.hxx>
#include <dirty/compiler.hxx>

#include <son8/main.hxx>
#include <stdexcept>
#include <cassert>


void son8::main( Args const & ) try {
    assert( false && "test if it is correctly building in debug " );
    char const *source = R"SON(
hello-program:
    -echo "Hello, world!"
;
)SON";

    dirty::Compiler compiler( source );
    compiler.generate( );
    // compiler.transfer( );
} catch ( std::exception const &e ) {
    std::cerr << "std::exception: " << e.what( ) << std::endl;
    exit( 1 );
}
