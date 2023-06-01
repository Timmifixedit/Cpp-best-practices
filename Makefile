LATEX=latexmk

all: main.pdf

main.pdf: main.tex
	$(LATEX) -pdf main.tex --shell-escape

clean:
	rm -f *.toc
	rm -f *.aux
	rm -f *.log
	rm -f *.out
	rm -f *.bbl
	rm -f *.blg
	rm -f *-blx.bib
	rm -f *.fdb_latexmk
	rm -f *.xml
	rm -f *.bcf
	rm -f build.png
	rm -rf _minted-main
	rm -f *.snm
	rm -f *.nav
	rm -f *.vrb

clean_all: clean
	rm -f *.pdf
	rm -f *.pdfpc
