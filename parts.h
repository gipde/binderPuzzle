#include <string>

struct variant
{
    int length;
    int width;
    int data[5];
};
struct part
{
    char id;
    std::string color;
    int xPos;
    int yPos;
    int vIdx;
    int vCount;
    variant variants[8];
};

part parts[] = {
    {.id = 'm',
     .color = "\u001b[35m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 4,
     .variants = {{.length = 3,
                   .width = 3,
                   .data = {1, 3, 6}},
                  {.length = 3,
                   .width = 3,
                   .data = {6, 3, 1}},
                  {.length = 3,
                   .width = 3,
                   .data = {3, 6, 4}},
                  {.length = 3,
                   .width = 3,
                   .data = {4, 6, 3}}}},
    {.id = 'a',
     .color = "\u001b[93m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 8,
     .variants = {{.length = 2,
                   .width = 4,
                   .data = {1, 15}},
                  {.length = 4,
                   .width = 2,
                   .data = {3, 1, 1, 1}},
                  {.length = 2,
                   .width = 4,
                   .data = {15, 8}},
                  {.length = 4,
                   .width = 2,
                   .data = {2, 2, 2, 3}},
                  {.length = 2,
                   .width = 4,
                   .data = {8, 15}},
                  {.length = 4,
                   .width = 2,
                   .data = {1, 1, 1, 3}},
                  {.length = 2,
                   .width = 4,
                   .data = {15, 1}},
                  {.length = 4,
                   .width = 2,
                   .data = {3, 2, 2, 2}}}},
    {.id = 'y',
     .color = "\u001b[33m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 8,
     .variants = {{.length = 2,
                   .width = 4,
                   .data = {2, 15}},
                  {.length = 4,
                   .width = 2,
                   .data = {1, 3, 1, 1}},
                  {.length = 2,
                   .width = 4,
                   .data = {15, 4}},
                  {.length = 4,
                   .width = 2,
                   .data = {2, 2, 3, 2}},
                  {.length = 2,
                   .width = 4,
                   .data = {4, 15}},
                  {.length = 4,
                   .width = 2,
                   .data = {1, 1, 3, 1}},
                  {.length = 2,
                   .width = 4,
                   .data = {15, 2}},
                  {.length = 4,
                   .width = 2,
                   .data = {2, 3, 2, 2}}}},
    {.id = 'p',
     .color = "\u001b[95m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 8,
     .variants = {{.length = 2,
                   .width = 4,
                   .data = {3, 14}},
                  {.length = 4,
                   .width = 2,
                   .data = {2, 3, 1, 1}},
                  {.length = 2,
                   .width = 4,
                   .data = {7, 12}},
                  {.length = 4,
                   .width = 2,
                   .data = {2, 2, 3, 1}},
                  {.length = 2,
                   .width = 4,
                   .data = {12, 7}},
                  {.length = 4,
                   .width = 2,
                   .data = {1, 1, 3, 2}},
                  {.length = 2,
                   .width = 4,
                   .data = {14, 3}},
                  {.length = 4,
                   .width = 2,
                   .data = {1, 3, 2, 2}}}},
    {.id = 'b',
     .color = "\u001b[94m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 4,
     .variants = {{.length = 3,
                   .width = 3,
                   .data = {1, 1, 7}},
                  {.length = 3,
                   .width = 3,
                   .data = {7, 1, 1}},
                  {.length = 3,
                   .width = 3,
                   .data = {7, 4, 4}},
                  {.length = 3,
                   .width = 3,
                   .data = {4, 4, 7}}}},
    {.id = 'o',
     .color = "\u001b[91m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 8,
     .variants = {{.length = 3,
                   .width = 3,
                   .data = {1, 7, 2}},
                  {.length = 3,
                   .width = 3,
                   .data = {6, 3, 2}},
                  {.length = 3,
                   .width = 3,
                   .data = {2, 7, 4}},
                  {.length = 3,
                   .width = 3,
                   .data = {2, 6, 3}},
                  {.length = 3,
                   .width = 3,
                   .data = {4, 7, 2}},
                  {.length = 3,
                   .width = 3,
                   .data = {2, 3, 6}},
                  {.length = 3,
                   .width = 3,
                   .data = {2, 7, 1}},
                  {.length = 3,
                   .width = 3,
                   .data = {3, 6, 2}}}},
    {.id = 'i',
     .color = "\u001b[92m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 4,
     .variants = {{.length = 2,
                   .width = 3,
                   .data = {5, 7}},
                  {.length = 3,
                   .width = 2,
                   .data = {3, 1, 3}},
                  {.length = 2,
                   .width = 3,
                   .data = {7, 5}},
                  {.length = 3,
                   .width = 2,
                   .data = {3, 2, 3}}}},
    {.id = 'e',
     .color = "\u001b[96m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 8,
     .variants = {{.length = 2,
                   .width = 3,
                   .data = {3, 7}},
                  {.length = 3,
                   .width = 2,
                   .data = {3, 3, 1}},
                  {.length = 2,
                   .width = 3,
                   .data = {7, 6}},
                  {.length = 3,
                   .width = 2,
                   .data = {2, 3, 3}},
                  {.length = 2,
                   .width = 3,
                   .data = {6, 7}},
                  {.length = 3,
                   .width = 2,
                   .data = {1, 3, 3}},
                  {.length = 2,
                   .width = 3,
                   .data = {7, 3}},
                  {.length = 3,
                   .width = 2,
                   .data = {3, 3, 2}}}},
    {.id = 'r',
     .color = "\u001b[31m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 4,
     .variants = {{.length = 2,
                   .width = 3,
                   .data = {3, 6}},
                  {.length = 3,
                   .width = 2,
                   .data = {2, 3, 1}},
                  {.length = 2,
                   .width = 3,
                   .data = {6, 3}},
                  {.length = 3,
                   .width = 2,
                   .data = {1, 3, 2}}}},
    {.id = 'u',
     .color = "\u001b[34m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 8,
     .variants = {{.length = 2,
                   .width = 3,
                   .data = {1, 7}},
                  {.length = 3,
                   .width = 2,
                   .data = {3, 1, 1}},
                  {.length = 2,
                   .width = 3,
                   .data = {7, 4}},
                  {.length = 3,
                   .width = 2,
                   .data = {2, 2, 3}},
                  {.length = 2,
                   .width = 3,
                   .data = {4, 7}},
                  {.length = 3,
                   .width = 2,
                   .data = {1, 1, 3}},
                  {.length = 2,
                   .width = 3,
                   .data = {7, 1}},
                  {.length = 3,
                   .width = 2,
                   .data = {3, 2, 2}}}},
    {.id = 'g',
     .color = "\u001b[32m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 4,
     .variants = {{.length = 2,
                   .width = 3,
                   .data = {2, 7}},
                  {.length = 3,
                   .width = 2,
                   .data = {1, 3, 1}},
                  {.length = 2,
                   .width = 3,
                   .data = {7, 2}},
                  {.length = 3,
                   .width = 2,
                   .data = {2, 3, 2}}}},
    {.id = 'c',
     .color = "\u001b[36m",
     .xPos = -1,
     .yPos = 0,
     .vIdx = 0,
     .vCount = 4,
     .variants = {{.length = 2,
                   .width = 2,
                   .data = {3, 1}},
                  {.length = 2,
                   .width = 2,
                   .data = {3, 2}},
                  {.length = 2,
                   .width = 2,
                   .data = {2, 3}},
                  {.length = 2,
                   .width = 2,
                   .data = {1, 3}}}}};

struct placement
{
    char id;
    int xPos;
    int yPos;
    int vIdx;
};

struct puzzle
{
    int puzzleCount;
    placement puzzles[12];
};

puzzle starter[] = {{9, {{'p', 0, 0, 7}, {'b', 0, 2, 0}, {'y', 1, 0, 2}, {'g', 2, 1, 1}, {'c', 3, 3, 3}, {'o', 4, 0, 5}, {'r', 4, 2, 3}, {'e', 6, 3, 0}, {'u', 6, 0, 6}}}, {9, {{'u', 0, 0, 1}, {'e', 0, 3, 0}, {'r', 1, 0, 1}, {'m', 2, 2, 0}, {'p', 3, 0, 5}, {'y', 4, 0, 2}, {'a', 4, 1, 7}, {'c', 6, 3, 3}, {'i', 8, 0, 2}}}};
puzzle junior[] = {{6, {{'y', 6, 0, 2}, {'u', 3, 0, 2}, {'p', 1, 0, 0}, {'r', 0, 0, 3}, {'b', 0, 2, 0}, {'o', 1, 2, 2}}}, {6, {{'y', 6, 0, 2}, {'u', 3, 0, 2}, {'p', 1, 0, 0}, {'r', 0, 0, 3}, {'b', 0, 2, 0}, {'o', 1, 2, 2}}}};
puzzle master[] = {{4, {{'y', 0, 0, 2}, {'m', 2, 1, 1}, {'i', 4, 0, 3}, {'b', 6, 0, 2}}}, {4, {{'e', 0, 0, 0}, {'y', 2, 0, 6}, {'r', 4, 1, 0}, {'c', 6, 0, 0}}}, {3, {{'e', 0, 0, 6}, {'r', 3, 0, 3}, {'u', 5, 2, 2}}}, {1, {{'c', 0, 0, 2}}}};
puzzle wizard[] = {{2, {{'u', 0, 0, 0}, {'a', 2, 2, 0}}}, {2, {{'e', 0, 0, 5}, {'y', 2, 2, 2}}}};


int board[5] = {0, 0, 0, 0, 0};
int placed = 0;

int checkCount = 0;
int positiveCheck = 0;
int partChecks = 0;


void showBoard()
{
    std::string charBoard[5][11];
    for (auto &&i : charBoard)
    {
        for (auto &&c : i)
        {
            c = "\x1b[0m.";
        }
    }

    for (auto &&p : parts)
    {
        if (p.xPos != -1)
        {
            std::string partId = p.color + p.id;
            auto variantData = p.variants[p.vIdx];
            auto partData = variantData.data;
            for (int y = 0; y < variantData.length; y++)
            {
                for (int x = 0; x < variantData.width; x++) // maximale Breite
                {
                    int result = partData[y] & (1 << x);
                    if (result)
                    {
                        charBoard[y + p.yPos][x + p.xPos] = partId;
                    }
                }
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            std::cout << charBoard[i][j] << ' ';
        }
        std::cout << "\x1b[0m"
                  //   << " " << std::to_string(board[i])
                  << std::endl;
    }
}


void showVariant(variant *variant, char id, std::string color)
{
    for (int y = 0; y < variant->length; y++)
    {
        for (int x = 0; x < variant->width; x++)
        {
            int result = variant->data[y] & 1 << x;
            std::string m = result == 1 << x ? color + id + " " : "\x1b[0m. ";
            std::cout << m;
        }
        std::cout << "\x1b[0m" << std::endl;
    }
}

part *findPart(char id)
{
    for (auto &&p : parts)
    {
        if (p.id == id)
        {
            return &p;
        }
    }
    return NULL;
}
