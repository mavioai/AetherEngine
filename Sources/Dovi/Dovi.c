// The Dovi module is libdovi's C API alone: include/dovi.h is the header of
// dolby_vision 3.4.0 as LibDovi 2.1.0 shipped it, and the functions are
// exported by the host app's own Rust library (Mavio's shared core), so that
// the app links one Rust standard library instead of one per static library.
#include "dovi.h"
