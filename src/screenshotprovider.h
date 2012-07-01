/*************************************************************************
 * This file is part of Screenshot Mee! for Nokia N9.
 * Copyright (C) 2012 Stanislav Ionascu <stanislav.ionascu@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/

#ifndef SCREENSHOTPROVIDER_H
#define SCREENSHOTPROVIDER_H

#include <QDeclarativeImageProvider>

class ScreenshotProvider : public QDeclarativeImageProvider
{
public:
    ScreenshotProvider();
    virtual ~ScreenshotProvider();

    QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize);

    static QImage lastScreenshotImage();
    static void grabScreenshot();
    static void rotateScreenshot();
};

#endif // SCREENSHOTPROVIDER_H
