////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///	Copyright (C) <%= year %> by <%= companyName %>
///
///	This file is part of the <%= projectName %> project.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@file						<%= projectPath %>/<%= folder %><%= className %>.hpp
///	@author						<%= authorName %> <<%= authorEmail %>>
///	@date						<%= date %>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __<%= projectPath %>_<%= folder.replace(/\//g, '_') %><%= className %>__
#define __<%= projectPath %>_<%= folder.replace(/\//g, '_') %><%= className %>__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace <%= projectPath.toLowerCase() %>
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@brief						A <%= className %> class
///
///								This is a class.

class <%= className %><%= parentClassName ? (' : public ' + parentClassName) : '' %>
{

    public:

        /// @brief				Default constructor

                                <%= className %> () ;

        /// @brief				Copy constructor
        ///
        /// @param              [in] a<%= className %>Class A <%= className %> class

                                <%= className %> (const <%= className %>& a<%= className %>Class) ;

         /// @brief				Destructor

                                ~<%= className %> () ;

        /// @brief              Copy assignment operator
        ///
        /// @param              [in] a<%= className %>Class A <%= className %> class
        /// @return             A <%= className %> class

        <%= className %>& operator = (const <%= className %>& a<%= className %>Class) ;

    protected:

    private:

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////