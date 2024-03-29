//
// Created by vorop on 30.10.2023.
//
#pragma once
#ifndef COURSEWORK_HEADER_H
#define COURSEWORK_HEADER_H

#include <vector>
#include "Exceptions.h"

const int SIZEBOARD = 8;
// Типы фигур
enum class TypeFigure{
    Pawn = 1,
    Knight,
    Bishop,
    Rook,
    Queen,
    King
};
// Кнопки стартового меню
enum class SelectStartMenu{
    Default,
    NewGameWithFriend = 1,
    NewGameWithComputer,
    RestoreGameWithFriend,
    RestoreGameWithComputer,
    ViewingCompletedGames,
    ChangeStyle,
    Exit
};
// Действия ввода файла
enum class ClickToSaveOrReturnFile{
    InputText,
    RemoveSymbol,
    Save,
    Exit,
    Default
};
// Кнопки бокового меню
enum class SidebarInGameProcess{
    GiveUp,
    StepBack,
    Save,
    Exit
};
// Кнопки бокового меню в режиме просмотра
enum class SidebarForWatch{
    StepForward,
    StepBack,
    Exit,
    Default
};
// Состояние игры
enum class StateGame{
    GameOn,
    Player1Win,
    Player2Win,
    Draw,
    View,
    Exit
};

#endif //COURSEWORK_HEADER_H
