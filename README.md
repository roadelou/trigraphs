# Trigraphs

As my keyboard doesn't support french accents, I have come to explore various techniques to support typing complex characters on keyboards without dedicated keys. I settled on using digraphs for my own purpose (see [the accentC repository](https://github.com/roadelou/accentC)), and was digging around wikipedia to see what other uses this technique had.

Much to my surprise, I learnt through [the "Digraphs and trigraphs" wikipedia page](https://en.wikipedia.org/wiki/Digraphs_and_trigraphs) that old C preprocessors supported trigraphs for ASCII characters which didn't exist on older keyboards: `#`, `\`, `^`, `[`, `]`, `|`, `{`, `}`, `~`.

So I tried it out on my machine with GCC (11.2.1) and clang (12.0.1), and it turns out they are supported, although not allowed by default. On both compilers I had to use a `-trigraph` flag to enable them (see the [Makefile](Makefile)).

Either way, I am committing the code to ensure I don't forget about this ancient and cursed knowledge... I could come in hand someday :wink:

### METADATA

Field | Value
--- | ---
:pencil: Contributors | roadelou
:email: Contacts | 
:date: Creation Date | 2021-08-31
:bulb: Language | Markdown Document

### EOF
