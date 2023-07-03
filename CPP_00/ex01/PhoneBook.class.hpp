#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

    class PhoneBook
    {
        public:
            PhoneBook ( void );
            ~PhoneBook ( void );

            int ft_add( void );
            int ft_search( void ) const ;

        private:
            int _indexContactTab;
            Contact _contactTab[8];
            void _ft_print_contactList( void ) const ;
            void _ft_print_contact( int index ) const ;


            
    };

#endif