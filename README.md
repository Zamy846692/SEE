
# Welcome to SEE (Simple ECMAScript Engine).

### SEE is a library that provides an ECMAScript (JavaScript) run-time environment.

Running configure and compiling in the normal way should provide
the library `libsee.lib` and a test application, `see-shell`.  I
strongly recommend that you have Boehm-gc installed (it's a garbage
collector library) otherwise see-shell just uses the non-free'ing
malloc().  Run configure with the `--help` argument to see switches
on how to configure it for boehm-gc.

Documentation for development using the SEE library can be found in
doc/USAGE.html.  The `see-shell` program doubles as an example and
demonstration of how the library is intended to be used.

I hope you find this library useful. Please send bug reports back to me
via <leonard@users.sourceforge.net>. New releases of SEE will be announced
at <http://freshmeat.net/projects/see/> and made available at
<http://www.adaptive-enterprises.com.au/~d/software/see/>.

The subversion repository for SEE is available at 
svn://svn.adaptive-enterprises.com.au/repos/see/

*David Leonard, 2004.*

From: https://adaptive-enterprises.com/~d/software/see/

Needs `Binutils` to work

Run `./configure && make` in a Bash terminal

*Zamy846692, 2025.*

### Directory organisation:
-  doc/		- Documentation
-  libsee/	- Library source
-  include/see	- Public header files
-  shell/	- Demo/test program `see-shell`
-  ssp/          - Demo HTTP server that runs server-side Javascript


