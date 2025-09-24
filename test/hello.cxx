#include <app.hxx>
#include <dirty/parser.hxx>
#include <dirty/compiler.hxx>

#include <son8/main.hxx>
#include <stdexcept>


void son8::main( Args const &args ) try {
    char const *source = R"SON(
hello-progra:
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
