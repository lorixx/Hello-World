//
//  HelloWorldAppDelegate.h
//  HelloWorld
//
//  Created by Zhisheng Huang on 8/13/10.
//  Copyright Northeastern University 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

