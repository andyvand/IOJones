//
//  AppDelegate.h
//  IOJones
//
//  Created by PHPdev32 on 3/13/13.
//  Licensed under GPLv3, full text at http://www.gnu.org/licenses/gpl-3.0.txt
//

@interface AppDelegate : NSObject <NSApplicationDelegate>


@end

@interface ArrayTransformer : NSValueTransformer

+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)transformedValue:(id)value;

@end

@interface ShouldEnable : NSValueTransformer

+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)transformedValue:(id)value;

@end
