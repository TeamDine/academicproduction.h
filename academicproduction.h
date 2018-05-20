///Cabecera de los Dependientes económicos
#ifndef ACADEMICPRODUCTION_H_INCLUDED
#define ACADEMICPRODUCTION_H_INCLUDED

/*** Cabeceras locales ***/
#include <string>
#include "name.h"
#include "date.h"

class AcademicProduction{
    private:
        std::string name;
        std::string type;
        Date elaborationDate;
        Name author;
        std::string id;
        std::string status;

    public:
        AcademicProduction();                                    ///Constructor base
        AcademicProduction(const AcademicProduction&);            /// Constructor Copia
        AcademicProduction(const std::string&, std::string&, Date&, Name&, std::string&, std::string&);    ///Constructor Parametrizado

        /*** getters ***/
        std::string getName();
        std::string getType();
        Date getElaborationDate();
        Name getAuthor();
        std::string getId();
        std::string getStatus();

        /*** setters ***/
        void setName(const std::string&);
        void setType(const std::string&);
        void setElaborationDate(const Date&);
        void setAuthor(const Name&);
        void setId(const std::string&);
        void setStatus(const std::string&);

        std::string toString();     ///Imprime datos
};

#endif // ACADEMICPRODUCTION_H_INCLUDED
