\documentclass[a4paper, 11pt, oneside, finnish, includehead]{article}%{scrartcl}
\usepackage[utf8]{inputenc}

\usepackage{cmbright}
\usepackage[T1]{fontenc}
\usepackage{color}
\usepackage{xcolor}

\input{savoniacolors.inc}

\usepackage[finnish]{babel}
\usepackage{graphicx}
\graphicspath{{fig/}} 
\bibliographystyle{apalike}
\usepackage{eurosym}
\usepackage[a4paper, lmargin=2cm, rmargin=1cm, tmargin=1cm, bmargin=1cm]{geometry}
\usepackage{fancyhdr}
\renewcommand{\headrulewidth}{0pt}
\usepackage{lastpage}
\usepackage[ddmmyyyy]{datetime}
\renewcommand{\dateseparator}{.}


\usepackage{titlesec}
\titleformat{\section}{\large\bfseries}{\thesection\ }{0cm}{\MakeUppercase}
\titleformat{\subsection}{\large}{\thesubsection\ }{0cm}{}
\titleformat{\subsubsection}{\large}{\thesubsubsection\ }{0cm}{}


\usepackage{titletoc}
\dottedcontents{section}[1.5cm]{\bfseries}{2.9em}{1pc}
\dottedcontents{subsection}[2.25cm]{}{3.3em}{1pc}
\dottedcontents{subsubsection}[2.25cm]{}{3.3em}{1pc}

\usepackage{makecell}
\renewcommand{\cellalign}{tl}


\addto\captionsfinnish{% Replace "finnish" with the language you use
  \renewcommand{\contentsname}%
    {Sisältö}%
}
