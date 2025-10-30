\documentclass[a4paper]{article}
\usepackage{fullpage}
\usepackage{amsmath}
\usepackage{amssymb}
\usepackage{textcomp}
\usepackage[utf8]{inputenc}
\usepackage[T1]{fontenc}
\usepackage[hidelinks]{hyperref}
\usepackage[left=2cm, right=2cm, top=2cm]{geometry}
\usepackage{graphicx}

\textheight=17in
\pagestyle{empty}
\raggedright

\def\bull{\vrule height 0.8ex width .7ex depth -.1ex }

\newcommand{\area} [2] {
    \vspace*{-9pt}
    \begin{verse}
        \textbf{#1}   #2
    \end{verse}
}

\newcommand{\lineunder} {
    \vspace*{-8pt} \\
    \hspace*{-18pt} \hrulefill \\
}

\newcommand{\header} [1] {
    {\hspace*{-18pt}\vspace*{6pt} \textsc{#1}}
    \vspace*{-6pt} \lineunder
}

\newcommand{\employer} [3] {
    { \textbf{#1} (#2)\\ \underline{\textbf{\emph{#3}}}\\  }
}

\newcommand{\contact} [3] {
    \vspace*{-10pt}
    \begin{center}
        {\Huge \scshape {#1}}\\
        #2 \\ #3
    \end{center}
    \vspace*{-8pt}
}

\newenvironment{achievements}{
    \begin{list}
        {$\bullet$}{\topsep 0pt \itemsep -2pt}}{\vspace*{4pt}
    \end{list}
}

\newcommand{\schoolwithcourses} [4] {
    \textbf{#1} #2 $\bullet$ #3\\
    #4 \\
    \vspace*{5pt}
}

\newcommand{\school} [4] {
    \textbf{#1} #2 $\bullet$ #3\\
    #4 \\
}

\begin{document}
\vspace*{-46pt}

\begin{center}
    {\Huge \scshape {GOURAV KUMAR SHAW}}\\
    \vspace*{2pt}
    \href{mailto:gkumars2956@gmail.com}{gkumars2956@gmail.com} | \href{tel:+91 8116750321}{+91 8116750321}\\
    \vspace*{2pt}
    \textbf{\href{https://github.com/Gourav1695}{GitHub | }}\textbf{\href{https://www.linkedin.com/in/gourav-kumar-shaw-b25561226/}{Linkedin | }}\textbf{\href{https://leetcode.com/gouravkr85/}{LeetCode | }}\textbf{\href{https://codeforces.com/profile/Gouravkr85}{CodeForces | }}\textbf{\href{https://www.codechef.com/users/gouravkr85}{CodeChef}}\\
\end{center}

\header{Summary}
Computer Science graduate with experience in software development, database automation, and machine learning, worked at Microsoft and PwC India with strong problem-solving and coding skills.

\header{Education}
\vspace{2mm}
\textbf{Indian Institute of Engineering Science and Technology, Shibpur}\hfill Howrah, West Bengal\\
B.Tech Computer Science and Technology \textit{\textbf{CGPA: 9.08}(till 8th semester)} \hfill December 2020 - June 2024\\
\vspace{2mm}
\textbf{Deshbandhu Vidyalaya (Boys) Chittaranjan, West Bengal}\hfill Chittaranjan, West Bengal\\
Class 12th, Science stream \textbf{87.8\%} in CBSE board \hfill June 2017 - March 2019\\
\vspace{2mm}

\header{Experience}
\vspace{2mm}

\textbf{PwC India | Associate Engineer}  \hfill Sept 2024 – Present | Bangalore, India\\
\vspace{-1mm}
\begin{itemize} \itemsep -2pt
    \item Working in the \textbf{Database Team} with hands-on experience in \textbf{manual and automated server patching}, \textbf{Ansible}, \textbf{Shell scripting}, \textbf{RAC}, \textbf{ASM}, \textbf{Multitenant Architecture}, and \textbf{Oracle SQL}.
    \item \textbf{Optimized client Ansible scripts}, reducing manual effort by \textbf{60\%} and eliminating the need for multiple DB logins.
\end{itemize}

\vspace{2mm}

\textbf{Microsoft | Software Engineer Intern} \hfill May 2023 - July 2023 | Hyderabad, India \\
\vspace{-1mm}
\begin{itemize} \itemsep -2pt
\item Worked on "\textbf{QF Scope and Query Builder}" project, \textbf{optimizing query formulation} to \textbf{improve user experience} in \textbf{Query Formulation} and \textbf{Search functionality}.
\item Prepared a detailed \textbf{design document} for the \textbf{implementation}, including \textbf{component overviews, workflow diagrams}, and other relevant information.
\item Implemented a strategy to \textbf{disable irrelevant suggestions} based on user input, aiming to \textbf{increase Session Success Rate (SSR)} and \textbf{decrease Time to Search (TTS)} for users who are likely to add \textbf{filters in the search}.
\item Developed an \textbf{auto-suggestion} feature for \textbf{natural language queries} using keywords like \textbf{"From:", "In:", "On:", and "To:"}, to help users scope their \textbf{queries effectively}.
\item Utilized \textbf{C\#, .NET framework, JavaScript} and \textbf{test-driven development} for a high-quality solution.
\item \textbf{\href{https://github.com/Gourav1695/Shaastra_event_iit_madras/blob/main/Microsoft_Internship_Certificate_-_Gourav_Kumar_Shaw1400064(1).pdf}{Link to Certificate}}
\end{itemize}

\header{Skills}
\vspace{2mm}
\begin{tabular}{p{4cm}p{12cm}}
Programming Languages: & C/C++, C\#, Python3, HTML, CSS, JavaScript, Java\\
Libraries/Frameworks: & Flask, .NET, Bootstrap, ReactJS, NodeJS \\
Tools / Platforms: & Git, GitHub, OpenCV, TensorFlow, NLTK, Numpy, Pandas, Matplotlib, Scikit-learn, Traditional ML algorithms, Excel, PowerPoint, Canva, Figma\\
Databases: & Oracle SQL, MySQL\\
Others: & Linux, Object Oriented Programming, DSA, Ansible, Shell Scripting
\end{tabular}
\vspace{1mm}

\header{Projects}
\vspace*{1mm}
\textbf{Filmy - The Movie Recommender} \textbf{| \href{https://github.com/Gourav1695/Filmy-The_Movie_Recommender}{Link}} | \href{https://www.youtube.com/watch?v=dgjVmIz1c1c}{\textbf{Demo}}\hfill{\sl Python, ML, Flask, HTML, CSS, JavaScript}\\
\begin{itemize} \itemsep -2pt
\item Developed \textbf{Filmy}, a \textbf{Content-Based Movie Recommender}, as a participant in \textbf{Microsoft Engage 2022}, with mentorship from a Senior Software Engineer at \textbf{Microsoft}.
\item Employed \textbf{HTML, CSS, and JavaScript} for the \textbf{front-end}, and utilized \textbf{Flask} and \textbf{Python} for the \textbf{back-end} implementation.
\item Conducted \textbf{web scraping} using \textbf{BeautifulSoup4} to extract \textbf{user reviews} from \textbf{IMDB} and performed \textbf{sentiment analysis} on the collected data.
\item Implemented \textbf{machine learning} models, including \textbf{Cosine Similarity}, \textbf{Bag of Words}, \textbf{tf-idf Vectorization}, \textbf{Similarity Analysis}, and \textbf{Review Analysis}, leveraging the \textbf{Multinomial Naïve Bayes} algorithm.
\end{itemize}

\header{Achievements}
\vspace{-2mm}
\begin{itemize} \itemsep -2pt
    \item CodeChef: Rank 608/5439 (Feb Cook-Off 2022), 966/10715 (Mar Long 2022).
    \item Solved 1000+ coding problems across LeetCode, Codeforces, and GFG.
\end{itemize}

\vspace{-4mm}
\header{Positions of Responsibility}
\vspace{-1mm}
\begin{itemize} \itemsep -2pt
    \item Core Member, CodeIIEST (Coding Club), Catharsis (Photography Club), Scage (Creative Expression).
\end{itemize}

\end{document}
