///Cabecera de los Dependientes económicos
#ifndef ACADEMICPRODUCTION_H_INCLUDED
#define ACADEMICPRODUCTION_H_INCLUDED


/*** Cabeceras locales ***/
#include <string>
#include "name.h"
#include "date.h"

class AcademicProduction{
    private:
        Name name;
        std::string type;
        Date elaborationDate;
        Name author;
        int id;
        std::string status;

    public:
        AcademicProduction();                                    ///Constructor base
        AcademicProduction(const AcademicProduction&);            /// Constructor Copia
        AcademicProduction(const Name&, std::string&, Date&, Name&, int&, std::string&);    ///Constructor Parametrizado

        /*** getters ***/
        Name getName();
        std::string getType();
        Date getElaborationDate();
        Name getAuthor;
        int getId();
        std::string getStatus();

        /*** setters ***/
        void setName(const Name&);
        void setType(const std::string&);
        void setElaborationDate(const Date&);
        void setAuthor(const Name&);
        void setId(const int&);
        void setStatus(const std::string&);

        std::string toString();     ///Imprime datos
};


#endif // ACADEMICPRODUCTION_H_INCLUDED
