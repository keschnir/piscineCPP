/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMonitorModule.hpp                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 15:27:26 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP_
#define IMONITORMODULE_HPP_

#include <iostream>
#include <vector>

class IMonitorModule
{
	public:
		virtual void	updateData(void) = 0;
		virtual std::string	getData(void) const = 0;
	//voir pour ajouter exception "data not found"

};

#endif