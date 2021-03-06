//
//  MyAppDelegate.h
//  SceneKitPreloadTest
//
//  Created by Jonathon Mah on 2012-09-01.
//  Copyright (c) 2012 Delicious Monster Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class MySCNView;


@interface MyAppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSWindow *window;
@property (weak) IBOutlet MySCNView *sceneView;

@property (nonatomic) BOOL tumble;

- (IBAction)resetMaterials:(id)sender;
- (IBAction)changeBoxMaterial:(id)sender;
- (IBAction)prepareThenChangeBoxMaterial:(id)sender;

@end
