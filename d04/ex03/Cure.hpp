#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure(void);
		Cure(std::string const& type);
		Cure(Cure const& src);
	
		Cure& operator=(Cure const& rhs);
		~Cure(void);
		std::string const & getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);

	private:
};