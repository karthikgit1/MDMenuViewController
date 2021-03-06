//
//  MDTransitionAnimatorFactory.h
//  Kitchens
//
//  Created by Mohammed Eldehairy on 3/20/14.
//  Copyright (c) 2014 Mohammed Eldehairy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MDTransitionAnimatorProtocol.h"
#import "MDTransitionAnimatorNone.h"
#import "MDTransitionAnimatorSlideFromRight.h"
#import "MDTransitionAnimatorSlideFromLeft.h"
@interface MDTransitionAnimatorFactory : NSObject
+(id<MDTransitionAnimatorProtocol>)transitionAnimatorWithType:(MDAnimationType)animationType;
@end
