cmake_minimum_required(VERSION 3.21)
project(d05)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex03)

add_executable(d05
        ex03/Bureaucrat.cpp
        ex03/Bureaucrat.h
        ex03/Form.cpp
        ex03/Form.h
        ex03/GradeTooHighException.h
        ex03/GradeTooLowException.h
        ex03/Intern.cpp
        ex03/Intern.h
        ex03/main.cpp
        ex03/PresidentialPardonForm.cpp
        ex03/PresidentialPardonForm.h
        ex03/RobotomyRequestForm.cpp
        ex03/RobotomyRequestForm.h
        ex03/ShrubberyCreationForm.cpp
        ex03/ShrubberyCreationForm.h)
