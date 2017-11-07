struct Vec3d
{
    Vec3d() = default;
    Vec3d(const double xv, const double yv, const double zv) :x(xv), y(yv), z(zv) {};
    Vec3d(const Vec3d& v) :x(v.x), y(v.y), z(v.z) {};

    ~Vec3d() = default;

    Vec3d& operator = (const Vec3d& v) 
    {
        x = v.x;
        y = v.y;
        z = v.z;
        return *this;
    }

    bool operator == (const Vec3d rhs) { return x == rhs.x && y == rhs.y && z == rhs.z; }
    bool operator != (const Vec3d rhs) { return !operator==(rhs); }
    Vec3d& operator +=(const Vec3d& rhs)
    {
        x += rhs.x;
        y += rhs.y;
        z += rhs.z;
        return *this;
    }

    double x{ 0.0 };
    double y{ 0.0 };
    double z{ 0.0 };
};