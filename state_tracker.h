/* state_tracker.h
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
 * Implements a state_tracker class for the state of the robot.
 */
#ifndef state_tracker_H_INCLUDED
#define state_tracker_H_INCLUDED

enum ROBOT_STATE {
	STATE_DRIVING,
	STATE_AIMING,
	STATE_SHOOTING
};

class state_tracker {
    private:
        ROBOT_STATE state;
    public:
        void set_state(ROBOT_STATE);
        ROBOT_STATE get_state();
        state_tracker() : state(STATE_DRIVING) {}
};

extern state_tracker global_state;

#endif // state_tracker_H_INCLUDED