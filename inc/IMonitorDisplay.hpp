/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMonitorDisplay.hpp                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:01:21 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY
#define IMONITORDISPLAY

#include <ncurses.h>
#include <iostream>

class IMonitorDisplay
{
protected:
    WINDOW * window;
    int width;
    int height;
    int cursor[2]; // y, x du curseur de fenetre deplaceable avec ncurses::move()
    
public:
    IMonitorDisplay(/* args */);
    virtual ~IMonitorDisplay();
    IMonitorDisplay & operator=(IMonitorDisplay const &);
    IMonitorDisplay(IMonitorDisplay &);

    virtual void display() = 0;
    virtual void init() = 0;
    virtual void refresh() = 0;
    virtual void print(std::string) = 0;
};


#endif