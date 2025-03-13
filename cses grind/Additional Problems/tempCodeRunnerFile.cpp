
                
            int new_pos = Num(Point_v.x, Point_v.y, r, c);
            if (u.first & (1LL << new_pos)) continue;
            
            llong new_state = u.first | (1LL << new_pos);
            if (trace.count({new_state, new_pos})) continue;
            
            trace[{new_state, new_pos}] = u.second;
            Q.push({new_state, new_pos});
        }
    }