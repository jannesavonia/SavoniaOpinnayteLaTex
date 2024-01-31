\begin{titlepage}
  \newgeometry{left=2cm, right=1cm, top=1cm, bottom=1cm}
  \hspace{-0.8cm}
  \includegraphics[scale=1]{savonia_ammattikorkeakoulu.png}\\[\bigskipamount]
  \noindent\makebox[\linewidth]{\textcolor{savoniamagenta}{  \hspace{-1cm}\rule{\paperwidth}{2cm}}}
  \vspace{-2.25cm}
  \textcolor{white}{
    \textbf{
      \large{\ \\ %Don't remove!
\MakeUppercase{\reporttype} -- \MakeUppercase{\degreefi}\\[1.3ex]
\MakeUppercase{\schoolfi}\\
      }
    }
  }
  \vspace{2cm}
  \textcolor{savoniamagenta}{
    \textbf{
      \huge{  \ \\ %Don't remove!
\MakeUppercase{\thetitle}\\
      }
    }
  }
  \textcolor{black}{
    \large{\ \\ %Don't remove!
\MakeUppercase{\thesubtitle}\\[11.5cm]
    }
  }
  \begin{tabular}{ll}
TEKIJÄ
& \theauthor\\
  \end{tabular}
  \restoregeometry
\end{titlepage}



\fancyhead[L]{\hspace*{-1cm}\begin{tabular}{l}SAVONIA-AMMATTIKORKEAKOULU\\ \ \end{tabular}}
\fancyhead[R]{\begin{tabular}{l}OPINNÄYTETYÖ\\Tiivistelmä\end{tabular}}
\fancyfoot{}
\pagestyle{fancy}

\noindent
\hspace*{-1cm}\begin{tabular}{|p{7.75cm}|p{7.5cm}|}
\hline
\multicolumn{2}{|l|}{Koulutusala}\\[1.25ex]
\multicolumn{2}{|l|}{\schoolfi}\\
\hline
\multicolumn{2}{|l|}{Tutkinto-ohjelma}\\[1.25ex]
\multicolumn{2}{|l|}{\degreefi}\\
\hline
\multicolumn{2}{|l|}{Työn tekijä(t)}\\[1.25ex]
\multicolumn{2}{|l|}{\theauthor}\\
\hline
\multicolumn{2}{|l|}{Työn nimi}\\[1.25ex]
\multicolumn{2}{|l|}{\thetitle}\\
\hline
Päiväys \hspace{1cm} \publishdate & Sivumäärä/Liitteet \hspace{1cm} \totalpages\ / \ \totalappendix \\
\hline
\multicolumn{2}{|l|}{Toimeksiantaja/Yhteistyökumppani(t)}\\
\multicolumn{2}{|l|}{\makecell{
\input{yhteistyokumppanit}
}
}\\
\hline
\multicolumn{2}{|l|}{Tiivistelmä}\\[1.25ex]
\multicolumn{2}{|l|}{

\makecell{
\noindent\begin{minipage}[t][16.0cm][t]{0.95\columnwidth}
\input{tiivistelma}
\end{minipage}
}
}\\
\hline
\multicolumn{2}{|l|}{Avainsanat}\\[1.25ex]
\multicolumn{2}{|l|}{
\makecell{
\input{avainsanat}
}
}\\
\hline
\end{tabular}

\pagebreak

\fancyhead[L]{\hspace*{-1cm}\begin{tabular}{l}SAVONIA UNIVERSITY OF APPLIED SCIENCES\\ \ \end{tabular}}
\fancyhead[R]{\begin{tabular}{l}THESIS\\Abstract\end{tabular}}
\pagestyle{fancy}

\noindent
\hspace*{-1cm}\begin{tabular}{|p{7.75cm}|p{7.5cm}|}
\hline
\multicolumn{2}{|l|}{Field of Study}\\[1.25ex]
\multicolumn{2}{|l|}{\schooluk}\\
\hline
\multicolumn{2}{|l|}{Degree Programme}\\[1.25ex]
\multicolumn{2}{|l|}{\degreefi}\\
\hline
\multicolumn{2}{|l|}{Author(s)}\\[1.25ex]
\multicolumn{2}{|l|}{\theauthor}\\
\hline
\multicolumn{2}{|l|}{Title of Thesis}\\[1.25ex]
\multicolumn{2}{|l|}{\thetitle}\\
\hline
Date \hspace{1cm} \publishdate & Pages/Appendicies \hspace{1cm} \totalpages\ / \ \totalappendix \\
\hline
\multicolumn{2}{|l|}{Client Organisation/Partners)}\\
\multicolumn{2}{|l|}{\makecell{
\input{yhteistyokumppanit}
}
}\\
\hline
\multicolumn{2}{|l|}{Abstract}\\[1.25ex]
\multicolumn{2}{|l|}{
\makecell{
\noindent\begin{minipage}[t][16.0cm][t]{0.95\columnwidth}
\input{abstract}
\end{minipage}
}
}\\
\hline
\multicolumn{2}{|l|}{Keywords}\\[1.25ex]
\multicolumn{2}{|l|}{
\makecell{
\input{keywords}
}
}\\
\hline
\end{tabular}


\pagebreak



\fancyhf{} % sets both header and footer to nothing
\fancyhead[R]{\thepage\ (\totalpages)}

\setcounter{tocdepth}{3}
\tableofcontents
\pagebreak
