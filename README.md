
ResultsMetaData Tool
================
This package provides a means for storing detailed information as metadata, for intermediate analysis results.
It is a "handshake" tool for packages that pass results to and from one another.
It also provides tools for avoiding "stupid mistakes" (uncommitted or "hacked-in" code, wrong MC, etc)
It also formats saved output plots in editable formats (eps, C macro) with attached metadata.

Usage
-----------

Benefits
-----------
 - Coordination
   - If you want to change global conventions, then you can do so in a coordinated way that reduces iterations.

 - Avoiding mistakes
   - Trace results back to the code used to produce it
   - Formalize outputs (.C files, .eps files, metadata inside files)
   - Force code to be committed. (Must specify the packages to look for.)
