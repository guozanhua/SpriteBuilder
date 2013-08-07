//
//  LocalizationEditorLanguage.h
//  SpriteBuilder
//
//  Created by Viktor on 8/7/13.
//
//

#import <Foundation/Foundation.h>

@interface LocalizationEditorLanguage : NSObject

@property (nonatomic,copy) NSString* isoLangCode;
@property (nonatomic,copy) NSString* name;

- (id) initWithIsoLangCode:(NSString*)code;

@end
