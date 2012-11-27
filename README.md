# TWNotification

# This is a fork of the original by DjKira 
I have added the possibility of choose the text alignment (left,center,right) and the color of the notification banner

Forked by MPow 
website http://mpow.it
twitter @manzopower

## Features
* Show notification like Twitter.app
* Different notification style: Success, Error and Message.
* You can choose notification timer.

## Installation
* Drag the TWNotification folder into your project.
* You need these two files: TWNotification.h and TWNotification.m

## Usage

### Init view.
you can use a style like TWNotificationStyleMessage (green) TWNotificationStyleError (red) ecc
 
 in this case set orUseACustomColor to nil

    [[[TWNotification alloc] init]initWithTitle:@"Start"
                    	message:@"Welcome to TWNotification"
                        alignment:Center
                        withStyle:TWNotificationStyleMessage
                        orUseACustomColor: nil
                        inView:self.view
                        hideAfter:2.0f];
	  
or override the style with a custom color

  [[[TWNotification alloc] init]initWithTitle:@"Start"
                     	message:@"Welcome to TWNotification"
                        alignment:Center
                        withStyle:TWNotificationStyleMessage
                        orUseACustomColor: [UIColor colorWithRed:0 green:0 blue:0 alpha:1.0 ]
                        inView:self.view
                        hideAfter:2.0f];

## Credit
©2012, Pigi Galdi (DjKira_)
http://pigigaldi.com 
or 
social@pigigaldi.com