gif-parser
==========

This program decodes a GIF and outputs a binary [Netpbm] file. The [GIF89a spec]
is the reference used.

This project is inspired by an assignment for my [Systems Programming] class. My
goal is to apply our implementation of the LZW compression algorithm to a
real-world problem. Unfortunately, I'm not permitted to share some of the source
for the assignment: ``BitUnpacker.c``, ``CodeSet.c``, ``LZWExp.c``.

[Netpbm]: https://en.wikipedia.org/wiki/Netpbm
[GIF89a spec]: https://www.w3.org/Graphics/GIF/spec-gif89a.txt
[Systems Programming]: https://users.csc.calpoly.edu/~grade-cstaley/357/
