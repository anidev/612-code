/* vision/vision_processing.h
 *
 * Copyright (c) 2011, 2012 Chantilly Robotics <chantilly612@gmail.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * Entry points for vision processing: distance and angle from image
 */
 
/*
 * Calculated angles are relative to perpendicular.
 */

#ifndef INC_VISION_PROCESSING_H
#define INC_VISION_PROCESSING_H

#include <vector>
#include <Vision/ColorImage.h>
#include <Vision/BinaryImage.h>
#include <Vision2009/VisionAPI.h>

class vision_processing {
private:
    static ColorImage* old_image;
    static const int MODE_HSV = 0;
    static const int MODE_HSI = 1;
    static const int MODE_HSL = 2;
    static int COLOR_MODE;
    static const int PARTICLE_AREA_MIN = 500;
    static const int PARTICLE_AREA_MAX = 10000;
public:
    static ColorImage* get_image();
    static ColorImage* get_old_image();
    static BinaryImage* get_image_mask(ColorImage*);
    static vector<ParticleAnalysisReport> get_image_targets(BinaryImage*);
    static unsigned int determine_aim_target(vector<ParticleAnalysisReport>);
    static unsigned int determine_aim_target_from_image(ColorImage*);
    static vector<double> get_distance();
    static vector<double> get_distance_from_image(ColorImage*);
    static vector<double> get_radians();
    static vector<double> get_radians_from_image(ColorImage*);
    static vector<double> get_degrees();
    static vector<double> get_degrees_from_image(ColorImage*);
};

#endif // INC_VISION_PROCESSING_H
