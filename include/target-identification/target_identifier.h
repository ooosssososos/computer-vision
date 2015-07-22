#ifndef TARGET_IDENTIFIER_H_INCLUDED
#define TARGET_IDENTIFIER_H_INCLUDED

/**
 * @file target_identifier.h
 *
 * @brief Module for identifying targets in Frames
 *
 * Module analyzes frames using OpenCV tools,
 * locates objects of interest and gathers information 
 * about the objects such as target colour, pixel area,
 * perimeter and shape.
 *
 * Frames that do not contain targets will be deleted
 * Otherwise, the responsibility for deleting Frames and the PixelTargets created
 * by the TargetIdentifier passes to whoever invokes popProcessed;
**/

#include "frame.h"
#include "target-identification/object_detector.h"

class TargetIdentifier{
    ObjectDetector * detector;
    public:
        TargetIdentifier();

        ~TargetIdentifier();


        /**
         * @brieif Processes frame and identifies targets
         *
         * @param f Frame to be processed
         */
        void process_frame(Frame * f);
};


#endif // TARGET_IDENTIFIER_H_INCLUDED
