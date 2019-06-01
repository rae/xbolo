//
//  GSBoloMTKView.h
//  Mac OS X
//
//  Created by Karl von Randow on 1/06/19.
//  Copyright © 2019 Robert Chrzanowski. All rights reserved.
//

#import <MetalKit/MetalKit.h>

#import "GSBoloViewProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@class GSXBoloController;

@interface GSBoloMTKView : MTKView<GSBoloViewProtocol> {
  IBOutlet GSXBoloController *boloController;
  NSEventModifierFlags modifiers;
}

@end

NS_ASSUME_NONNULL_END
